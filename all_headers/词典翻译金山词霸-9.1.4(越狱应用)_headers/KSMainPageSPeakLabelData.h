//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface KSMainPageSPeakLabelData : NSObject
{
    NSString *_identify;
    NSString *_labelId;
    NSString *_title;
    NSString *_contentId;
    NSString *_contentType;
    NSString *_contentOrder;
    NSString *_count;
    NSString *_listImage;
    NSString *_score;
    NSArray *_tags;
}

+ (id)mj_replacedKeyFromPropertyName;
@property(retain, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(copy, nonatomic) NSString *score; // @synthesize score=_score;
@property(copy, nonatomic) NSString *listImage; // @synthesize listImage=_listImage;
@property(copy, nonatomic) NSString *count; // @synthesize count=_count;
@property(copy, nonatomic) NSString *contentOrder; // @synthesize contentOrder=_contentOrder;
@property(copy, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(copy, nonatomic) NSString *contentId; // @synthesize contentId=_contentId;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *labelId; // @synthesize labelId=_labelId;
@property(copy, nonatomic) NSString *identify; // @synthesize identify=_identify;
- (void).cxx_destruct;

@end

