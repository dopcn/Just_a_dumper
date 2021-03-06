//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IphoneComFramework/JSONModel.h>

@class MCSeneryArPoi, NSArray, NSString;
@protocol Ignore, Optional;

@interface MCSeneryGuideModel : JSONModel
{
    NSArray<Ignore> *_son;
    MCSeneryArPoi *_father;
    NSString<Optional> *_ext;
    NSArray *_aois;
}

+ (double)getDistanceWithStartPoint:(struct BMPoint)arg1 endPoint:(struct BMPoint)arg2;
+ (id)test;
@property(retain, nonatomic) NSArray *aois; // @synthesize aois=_aois;
@property(copy, nonatomic) NSString<Optional> *ext; // @synthesize ext=_ext;
@property(retain, nonatomic) MCSeneryArPoi *father; // @synthesize father=_father;
@property(retain, nonatomic) NSArray<Ignore> *son; // @synthesize son=_son;
- (void).cxx_destruct;
- (void)reloadDistance;

@end

