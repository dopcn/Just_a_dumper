//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface CDNewTrainingQuestionItemEntity : NSObject
{
    _Bool _choosed;
    long long _itemId;
    NSString *_name;
    NSString *_info;
    long long _nextQuestionId;
    long long _planId;
}

+ (id)modelCustomPropertyMapper;
@property(nonatomic) _Bool choosed; // @synthesize choosed=_choosed;
@property(nonatomic) long long planId; // @synthesize planId=_planId;
@property(nonatomic) long long nextQuestionId; // @synthesize nextQuestionId=_nextQuestionId;
@property(copy, nonatomic) NSString *info; // @synthesize info=_info;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;

@end

