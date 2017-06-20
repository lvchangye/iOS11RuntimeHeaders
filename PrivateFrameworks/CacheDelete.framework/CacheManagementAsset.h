/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CacheDelete.framework/CacheDelete
 */

@interface CacheManagementAsset : NSObject {
    NSString * _absolutePath;
    unsigned int  _assetVersion;
    double  _consumed_date;
    NSString * _contentType;
    NSString * _displayName;
    double  _download_completion_date;
    double  _download_start_date;
    double  _expiration_date;
    bool  _hasLegacyXattrs;
    NSString * _identifier;
    NSData * _metadata;
    int  _priority;
    NSString * _relativePath;
}

@property (retain) NSString *absolutePath;
@property (readonly) unsigned int assetVersion;
@property double consumed_date;
@property (nonatomic, retain) NSString *contentType;
@property (nonatomic, retain) NSString *displayName;
@property double download_completion_date;
@property double download_start_date;
@property double expiration_date;
@property bool hasLegacyXattrs;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, retain) NSData *metadata;
@property int priority;
@property (nonatomic, retain) NSString *relativePath;
@property (nonatomic, retain) NSData *thumbnailData;

+ (id)assetFromData:(id)arg1;
+ (id)assetFromFile:(id)arg1 withIdentifier:(id)arg2;
+ (id)assetFromPath:(id)arg1 withIdentifier:(id)arg2;
+ (id)assetFromPath:(id)arg1 withIdentifier:(id)arg2 createIfAbsent:(bool)arg3;
+ (id)assetWithRelativePath:(id)arg1 identifier:(id)arg2 expirationDate:(id)arg3 contentType:(id)arg4 metadata:(id)arg5 priority:(int)arg6;

- (void).cxx_destruct;
- (id)absolutePath;
- (unsigned int)assetVersion;
- (void)commit;
- (id)consumedDate;
- (double)consumed_date;
- (id)contentType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct { unsigned int x1; double x2; double x3; double x4; double x5; int x6; bool x7; long long x8; long long x9; long long x10; long long x11; long long x12; BOOL x13[0]; }*)createFlattenedAsset:(long long*)arg1;
- (id)description;
- (id)displayName;
- (id)downloadCompletionDate;
- (id)downloadStartDate;
- (double)download_completion_date;
- (double)download_start_date;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (double)expiration_date;
- (id)fullPath;
- (bool)hasLegacyXattrs;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithFlattenedAsset:(struct { unsigned int x1; double x2; double x3; double x4; double x5; int x6; bool x7; long long x8; long long x9; long long x10; long long x11; long long x12; BOOL x13[0]; }*)arg1;
- (id)initWithRelativePath:(id)arg1 identifier:(id)arg2 expirationDate:(id)arg3 contentType:(id)arg4 metadata:(id)arg5 priority:(int)arg6;
- (id)metadata;
- (int)priority;
- (int)purgeabilityScoreAtUrgency:(int)arg1;
- (id)relativePath;
- (void)setAbsolutePath:(id)arg1;
- (void)setConsumedDate:(id)arg1;
- (void)setConsumed_date:(double)arg1;
- (void)setContentType:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setDownloadCompletionDate:(id)arg1;
- (void)setDownloadStartDate:(id)arg1;
- (void)setDownload_completion_date:(double)arg1;
- (void)setDownload_start_date:(double)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setExpiration_date:(double)arg1;
- (void)setHasLegacyXattrs:(bool)arg1;
- (void)setMetadata:(id)arg1;
- (void)setPriority:(int)arg1;
- (void)setRelativePath:(id)arg1;
- (void)setThumbnailData:(id)arg1;
- (long long)size;
- (long long)sizeCached:(bool)arg1;
- (id)thumbnailData;

@end