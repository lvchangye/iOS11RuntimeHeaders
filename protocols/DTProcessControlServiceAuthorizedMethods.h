/* Generated by RuntimeBrowser.
 */

@protocol DTProcessControlServiceAuthorizedMethods <DTXAllowedRPC>

@required

- (void)killPid:(NSNumber *)arg1;
- (NSNumber *)launchSuspendedProcessWithDevicePath:(NSString *)arg1 bundleIdentifier:(NSString *)arg2 environment:(NSDictionary *)arg3 arguments:(NSArray *)arg4 options:(NSDictionary *)arg5;
- (void)resumePid:(NSNumber *)arg1;
- (void)sendProcessControlEvent:(NSData *)arg1 toPid:(NSNumber *)arg2;
- (void)startObservingPid:(NSNumber *)arg1;
- (void)stopObservingPid:(NSNumber *)arg1;
- (void)suspendPid:(NSNumber *)arg1;

@end