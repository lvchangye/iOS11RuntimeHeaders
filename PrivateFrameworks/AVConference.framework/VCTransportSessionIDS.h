/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCTransportSessionIDS : VCTransportSession <VCConnectionManagerDelegate> {
    VCDatagramChannelIDS * _datagramChannel;
    NSString * _destination;
    int  _socket;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *destination;
@property (readonly) unsigned long long hash;
@property (nonatomic) int socket;
@property (readonly) Class superclass;

- (void)connectionCallback:(id)arg1 isInitialConnection:(bool)arg2;
- (id)connectionSetupPiggybackBlob;
- (void)dealloc;
- (void)deregisterBasebandNotifications;
- (id)destination;
- (void)didEnableDuplication:(bool)arg1 activeConnection:(id)arg2;
- (void)discardConnection:(id)arg1;
- (int)flushBasebandQueueForConnection:(id)arg1 payloadInfoList:(id)arg2;
- (bool)getConnectionSetupData:(id*)arg1 withOptions:(id)arg2 error:(id*)arg3;
- (int)getSignalStrength:(int*)arg1 signalRaw:(int*)arg2 signalGrade:(int*)arg3;
- (void)handleCellularMTUChanged:(id)arg1;
- (void)handleChannelInfoReport:(id)arg1;
- (void)handleDefaultLinkUpdatedWithInfo:(id)arg1;
- (void)handleLinkConnectedWithInfo:(id)arg1;
- (void)handleLinkDisconnectedWithInfo:(id)arg1;
- (void)handlePreConnectionDataReceived:(id)arg1;
- (void)handleRATChanged:(id)arg1;
- (id)initWithCallID:(unsigned int)arg1;
- (void)primaryConnectionChanged:(id)arg1 oldPrimaryConnection:(id)arg2;
- (int)registerBasebandNotificationsForConnection:(id)arg1;
- (void)setConnectionSetupPiggybackBlob:(id)arg1;
- (void)setConnectionSetupTime;
- (void)setDefaultLink:(id)arg1;
- (void)setDestination:(id)arg1;
- (void)setPiggybackBlobPreference;
- (void)setQuickRelayServerProvider:(int)arg1;
- (void)setReportingAgent:(struct opaqueRTCReporting { }*)arg1;
- (void)setSocket:(int)arg1;
- (int)socket;
- (void)start;
- (void)stop;
- (int)updateQualityIndicator:(int)arg1 isIPv6:(bool)arg2;

@end
