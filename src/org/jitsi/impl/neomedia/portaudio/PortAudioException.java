/*
 * Jitsi, the OpenSource Java VoIP and Instant Messaging client.
 *
 * Distributable under LGPL license.
 * See terms of license at gnu.org.
 */
package org.jitsi.impl.neomedia.portaudio;

/**
 * Implements <tt>Exception</tt> for the PortAudio capture and playback system.
 * 
 * @author Lyubomir Marinov
 */
public class PortAudioException
    extends Exception
{
    /**
     * Serial version UID.
     */
    private static final long serialVersionUID = 0L;

    /**
     * Initializes a new <tt>PortAudioException</tt> instance with a specific
     * detail message.
     *
     * @param message the detail message to initialize the new instance with
     */
    public PortAudioException(String message)
    {
        super(message);
    }
}