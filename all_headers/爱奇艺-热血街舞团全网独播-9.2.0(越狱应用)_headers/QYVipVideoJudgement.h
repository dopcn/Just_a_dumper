//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface QYVipVideoJudgement : NSObject
{
    id _delegate;
    NSMutableDictionary *userInfo;
}

+ (id)userStateString:(int)arg1;
+ (id)purhcaseTypeString:(int)arg1;
+ (id)purhcaseString:(int)arg1;
+ (_Bool)couldPlayThisVideoByAlbum:(id)arg1;
+ (_Bool)hasAlbumPlayAuthorization:(id)arg1;
+ (_Bool)hasLocalVideo:(id)arg1 tvid:(id)arg2 album:(id)arg3;
+ (_Bool)isVipMovie:(id)arg1;
+ (id)vipBigFlagImgName;
+ (id)vipSmallFlagImgName;
- (void).cxx_destruct;

@end

