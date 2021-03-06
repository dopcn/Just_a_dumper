//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class LMEntity, NSArray;

@interface LMRecommend : NSObject
{
    _Bool _isSDK;
    unsigned long long _recommendOrder;
    unsigned long long _showType;
    LMEntity *_recommendEntity;
    NSArray *_entityList;
    NSArray *_attachList;
    double _startTime;
    double _endTime;
}

+ (id)parseDataFromRecommend:(id)arg1 showTagTypes:(id)arg2;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSArray *attachList; // @synthesize attachList=_attachList;
@property(retain, nonatomic) NSArray *entityList; // @synthesize entityList=_entityList;
@property(retain, nonatomic) LMEntity *recommendEntity; // @synthesize recommendEntity=_recommendEntity;
@property(nonatomic) unsigned long long showType; // @synthesize showType=_showType;
@property(nonatomic) _Bool isSDK; // @synthesize isSDK=_isSDK;
@property(nonatomic) unsigned long long recommendOrder; // @synthesize recommendOrder=_recommendOrder;
- (void).cxx_destruct;

@end

