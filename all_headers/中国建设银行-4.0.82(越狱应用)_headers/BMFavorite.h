//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface BMFavorite : NSObject
{
    long long curFavPoiCount;
}

- (id)getBMFavSyncPoiInfoWithBundle:(struct CVBundle)arg1;
- (_Bool)getCVBundleWithBMFavSyncPoiInfo:(id)arg1 resBundle:(struct CVBundle *)arg2;
- (_Bool)clearAllFavPois;
- (_Bool)deleteFavPoi:(id)arg1;
- (_Bool)updateFavPoiWithKey:(id)arg1 syncPoiInfo:(id)arg2;
- (id)getAllFavPois;
- (id)getFavPoiWithCVString:(struct CVString)arg1;
- (id)getFavPoi:(id)arg1;
- (long long)addFavPoi:(id)arg1;
- (void)dealloc;
- (id)init;

@end

