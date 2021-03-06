//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface MTCloudBeautyEffectGroupModel : NSObject
{
    unsigned short _isFaceRectWifi;
    unsigned short _isMinEdgeWifi;
    unsigned short _isFaceRectWWAN;
    unsigned short _isMinEdgeWWAN;
    NSString *_groupID;
    NSString *_groupName;
    NSDictionary *_groupExtra;
    double _maxPixelWifi;
    double _qualityWifi;
    double _maxPixelWWAN;
    double _qualityWWAN;
    NSArray *_effectLists;
    NSString *_tokenURL;
}

+ (id)objectArrayWithJsonArray:(id)arg1;
@property(retain, nonatomic) NSString *tokenURL; // @synthesize tokenURL=_tokenURL;
@property(retain, nonatomic) NSArray *effectLists; // @synthesize effectLists=_effectLists;
@property(nonatomic) unsigned short isMinEdgeWWAN; // @synthesize isMinEdgeWWAN=_isMinEdgeWWAN;
@property(nonatomic) unsigned short isFaceRectWWAN; // @synthesize isFaceRectWWAN=_isFaceRectWWAN;
@property(nonatomic) unsigned short isMinEdgeWifi; // @synthesize isMinEdgeWifi=_isMinEdgeWifi;
@property(nonatomic) unsigned short isFaceRectWifi; // @synthesize isFaceRectWifi=_isFaceRectWifi;
@property(nonatomic) double qualityWWAN; // @synthesize qualityWWAN=_qualityWWAN;
@property(nonatomic) double maxPixelWWAN; // @synthesize maxPixelWWAN=_maxPixelWWAN;
@property(nonatomic) double qualityWifi; // @synthesize qualityWifi=_qualityWifi;
@property(nonatomic) double maxPixelWifi; // @synthesize maxPixelWifi=_maxPixelWifi;
@property(retain, nonatomic) NSDictionary *groupExtra; // @synthesize groupExtra=_groupExtra;
@property(retain, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(retain, nonatomic) NSString *groupID; // @synthesize groupID=_groupID;
- (void).cxx_destruct;
- (id)init;

@end

