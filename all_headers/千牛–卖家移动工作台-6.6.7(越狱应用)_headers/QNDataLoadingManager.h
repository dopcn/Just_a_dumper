//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface QNDataLoadingManager : NSObject
{
    _Bool _hasLoadedOnce;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool hasLoadedOnce; // @synthesize hasLoadedOnce=_hasLoadedOnce;
- (void)sessionError:(id)arg1;
- (void)startLoadingDefaultDataWithUserID:(id)arg1 dataCompletion:(CDUnknownBlockType)arg2;
- (void)startLoadingDataWithUserID:(id)arg1 dataCompletion:(CDUnknownBlockType)arg2;
- (void)startLoadingDataWithUserID:(id)arg1;
- (void)showToutiaoRedPoint:(id)arg1;
- (id)init;

@end

