/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICStorePlatformMetadata : NSObject {
    NSDate * _expirationDate;
    NSDictionary * _metadataDictionary;
}

@property (nonatomic, readonly, copy) NSString *artistName;
@property (nonatomic, readonly) long long artistStoreAdamID;
@property (nonatomic, readonly, copy) NSArray *artworkInfos;
@property (nonatomic, readonly, copy) NSString *cloudUniversalLibraryID;
@property (nonatomic, readonly, copy) NSString *collectionName;
@property (nonatomic, readonly) long long collectionStoreAdamID;
@property (nonatomic, readonly, copy) NSString *composerName;
@property (nonatomic, readonly, copy) NSString *copyrightText;
@property (nonatomic, readonly) long long discNumber;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly, copy) NSDate *expirationDate;
@property (nonatomic, readonly) long long explicitRating;
@property (nonatomic, readonly, copy) NSArray *genreNames;
@property (nonatomic, readonly) bool hasLyrics;
@property (nonatomic, readonly, copy) NSString *kind;
@property (nonatomic, readonly, copy) NSDictionary *metadataDictionary;
@property (nonatomic, readonly) long long movementCount;
@property (nonatomic, readonly, copy) NSString *movementName;
@property (nonatomic, readonly) long long movementNumber;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSArray *offers;
@property (nonatomic, readonly, copy) NSString *playlistGlobalID;
@property (nonatomic, readonly, copy) NSString *radioStationStringID;
@property (nonatomic, readonly, copy) NSDate *releaseDate;
@property (nonatomic, readonly) bool shouldShowComposer;
@property (nonatomic, readonly) long long storeAdamID;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly) long long trackNumber;
@property (nonatomic, readonly, copy) NSString *workName;

+ (id)storeServerCalendar;

- (void).cxx_destruct;
- (id)_storePlatformReleaseDateFormatter;
- (id)artistName;
- (long long)artistStoreAdamID;
- (id)artworkInfos;
- (id)cloudUniversalLibraryID;
- (id)collectionName;
- (long long)collectionStoreAdamID;
- (id)composerName;
- (id)copyrightText;
- (long long)discNumber;
- (double)duration;
- (id)expirationDate;
- (long long)explicitRating;
- (id)genreNames;
- (bool)hasLyrics;
- (id)initWithMetadataDictionary:(id)arg1;
- (id)initWithMetadataDictionary:(id)arg1 expirationDate:(id)arg2;
- (id)kind;
- (id)metadataDictionary;
- (long long)movementCount;
- (id)movementName;
- (long long)movementNumber;
- (id)name;
- (id)offerWithType:(id)arg1;
- (id)offers;
- (id)playlistGlobalID;
- (id)radioStationStringID;
- (id)releaseDate;
- (bool)shouldShowComposer;
- (long long)storeAdamID;
- (id)title;
- (long long)trackNumber;
- (id)workName;

@end