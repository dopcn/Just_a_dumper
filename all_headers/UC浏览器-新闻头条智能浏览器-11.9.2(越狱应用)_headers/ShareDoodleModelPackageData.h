//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ShareDoodleModelBriefPackageData, ShareDoodleModelDetailPackageData;

@interface ShareDoodleModelPackageData : NSObject
{
    ShareDoodleModelBriefPackageData *_briefData;
    ShareDoodleModelDetailPackageData *_detailData;
}

@property(retain, nonatomic) ShareDoodleModelDetailPackageData *detailData; // @synthesize detailData=_detailData;
@property(retain, nonatomic) ShareDoodleModelBriefPackageData *briefData; // @synthesize briefData=_briefData;
- (void)dealloc;

@end

