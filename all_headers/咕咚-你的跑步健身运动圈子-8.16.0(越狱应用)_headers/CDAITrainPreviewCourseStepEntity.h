//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface CDAITrainPreviewCourseStepEntity : NSObject
{
    NSString *_bgImageUrl;
    NSString *_info;
    NSString *_name;
    long long _stepId;
}

+ (id)modelCustomPropertyMapper;
@property(nonatomic) long long stepId; // @synthesize stepId=_stepId;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *info; // @synthesize info=_info;
@property(copy, nonatomic) NSString *bgImageUrl; // @synthesize bgImageUrl=_bgImageUrl;
- (void).cxx_destruct;

@end

