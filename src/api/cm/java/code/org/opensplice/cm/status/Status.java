/*
 *                         OpenSplice DDS
 *
 *   This software and documentation are Copyright 2006 to 2009 PrismTech 
 *   Limited and its licensees. All rights reserved. See file:
 *
 *                     $OSPL_HOME/LICENSE 
 *
 *   for full copyright notice and license terms. 
 *
 */
package org.opensplice.cm.status;

/**
 * Abstract base class for a communication status.
 * 
 * @date Oct 12, 2004 
 */
public abstract class Status {
    protected String state;
    
    /**
     * Creates a new Status from the supplied argument.
     *
     * @param _state The state of the Status.
     */
    public Status(String _state){
        state = _state;
    }
    
    /**
     * Provides access to the state.
     * 
     * @return The state.
     */
    public String getState(){
        return state;
    }
}
