//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface JDFinderHomeHeaderResponse : NSObject
{
    NSString *_homePitTitle;
    NSString *_code;
    NSArray *_homePits;
    NSArray *_floorList;
    NSArray *_webViews;
    NSArray *_articleType;
    NSArray *_indexBanner;
    NSDictionary *_poz;
    NSArray *_content;
    NSString *_floorMoodImg;
    NSString *_floorFontColor;
    long long _view;
    NSString *_topIcon;
    NSString *_browseHere;
    NSString *_updateLetter;
    long long _validTime;
}

+ (id)objectClassInArray;
@property(nonatomic) long long validTime; // @synthesize validTime=_validTime;
@property(copy, nonatomic) NSString *updateLetter; // @synthesize updateLetter=_updateLetter;
@property(copy, nonatomic) NSString *browseHere; // @synthesize browseHere=_browseHere;
@property(retain, nonatomic) NSString *topIcon; // @synthesize topIcon=_topIcon;
@property(nonatomic) long long view; // @synthesize view=_view;
@property(copy, nonatomic) NSString *floorFontColor; // @synthesize floorFontColor=_floorFontColor;
@property(copy, nonatomic) NSString *floorMoodImg; // @synthesize floorMoodImg=_floorMoodImg;
@property(readonly, nonatomic) NSArray *content; // @synthesize content=_content;
@property(retain, nonatomic) NSDictionary *poz; // @synthesize poz=_poz;
@property(retain, nonatomic) NSArray *indexBanner; // @synthesize indexBanner=_indexBanner;
@property(retain, nonatomic) NSArray *articleType; // @synthesize articleType=_articleType;
@property(retain, nonatomic) NSArray *webViews; // @synthesize webViews=_webViews;
@property(retain, nonatomic) NSArray *floorList; // @synthesize floorList=_floorList;
@property(retain, nonatomic) NSArray *homePits; // @synthesize homePits=_homePits;
@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
@property(copy, nonatomic) NSString *homePitTitle; // @synthesize homePitTitle=_homePitTitle;
- (void).cxx_destruct;
- (void)keyValuesDidFinishConvertingToObject;

@end

