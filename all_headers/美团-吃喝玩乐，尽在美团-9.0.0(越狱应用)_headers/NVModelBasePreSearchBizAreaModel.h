//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVBaseModel.h"

@class NSArray, NSString;

@interface NVModelBasePreSearchBizAreaModel : NVBaseModel
{
    NSString *_tipTitle;
    NSString *_navTitle;
    NSArray *_bizAreaList;
}

+ (id)metaInfo;
@property(retain, nonatomic) NSArray *bizAreaList; // @synthesize bizAreaList=_bizAreaList;
@property(copy, nonatomic) NSString *navTitle; // @synthesize navTitle=_navTitle;
@property(copy, nonatomic) NSString *tipTitle; // @synthesize tipTitle=_tipTitle;
- (void).cxx_destruct;

@end

