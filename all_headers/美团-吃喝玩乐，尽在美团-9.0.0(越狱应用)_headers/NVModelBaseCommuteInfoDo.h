//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVBaseModel.h"

@class NSString;

@interface NVModelBaseCommuteInfoDo : NVBaseModel
{
    long long _type;
    NSString *_title;
    NSString *_timeCost;
    NSString *_desc;
}

+ (id)metaInfo;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *timeCost; // @synthesize timeCost=_timeCost;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

