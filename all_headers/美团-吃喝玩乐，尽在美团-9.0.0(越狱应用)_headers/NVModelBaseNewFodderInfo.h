//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVBaseModel.h"

@class NSString;

@interface NVModelBaseNewFodderInfo : NVBaseModel
{
    NSString *_descriptionStr;
    NSString *_value;
    long long _priority;
    NSString *_group;
    NSString *_type;
}

+ (id)metaInfo;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *group; // @synthesize group=_group;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *descriptionStr; // @synthesize descriptionStr=_descriptionStr;
- (void).cxx_destruct;

@end

