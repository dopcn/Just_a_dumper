//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface CTHomeCascadeCuisineInfoModel : NSObject
{
    NSString *_labelContent;
    NSString *_title;
    NSString *_url;
    NSString *_jumpUrl;
    NSString *_coverImageUrl;
    long long _insertIndex;
    NSMutableArray *_cuisineList;
}

@property(retain, nonatomic) NSMutableArray *cuisineList; // @synthesize cuisineList=_cuisineList;
@property(nonatomic) long long insertIndex; // @synthesize insertIndex=_insertIndex;
@property(copy, nonatomic) NSString *coverImageUrl; // @synthesize coverImageUrl=_coverImageUrl;
@property(copy, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *labelContent; // @synthesize labelContent=_labelContent;
- (void).cxx_destruct;

@end

