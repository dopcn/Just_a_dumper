//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface SNSParticipantTopicModel : NSObject
{
    _Bool _hotReachedEnd;
    _Bool _latestReachedEnd;
    _Bool _bothReachedEnd;
    _Bool _myReachedEnd;
    long long _selectType;
    NSMutableArray *_hotList;
    NSMutableArray *_latestList;
    NSMutableArray *_bothList;
    NSMutableArray *_myList;
    NSString *_hotSinceTime;
    NSString *_latestSinceTime;
    NSString *_bothSinceTime;
    NSString *_mySinceTime;
    long long _hotDataType;
    long long _latestDataType;
    long long _bothDataType;
    long long _myDataType;
}

@property(nonatomic) _Bool myReachedEnd; // @synthesize myReachedEnd=_myReachedEnd;
@property(nonatomic) _Bool bothReachedEnd; // @synthesize bothReachedEnd=_bothReachedEnd;
@property(nonatomic) _Bool latestReachedEnd; // @synthesize latestReachedEnd=_latestReachedEnd;
@property(nonatomic) _Bool hotReachedEnd; // @synthesize hotReachedEnd=_hotReachedEnd;
@property(nonatomic) long long myDataType; // @synthesize myDataType=_myDataType;
@property(nonatomic) long long bothDataType; // @synthesize bothDataType=_bothDataType;
@property(nonatomic) long long latestDataType; // @synthesize latestDataType=_latestDataType;
@property(nonatomic) long long hotDataType; // @synthesize hotDataType=_hotDataType;
@property(copy, nonatomic) NSString *mySinceTime; // @synthesize mySinceTime=_mySinceTime;
@property(copy, nonatomic) NSString *bothSinceTime; // @synthesize bothSinceTime=_bothSinceTime;
@property(copy, nonatomic) NSString *latestSinceTime; // @synthesize latestSinceTime=_latestSinceTime;
@property(copy, nonatomic) NSString *hotSinceTime; // @synthesize hotSinceTime=_hotSinceTime;
@property(retain, nonatomic) NSMutableArray *myList; // @synthesize myList=_myList;
@property(retain, nonatomic) NSMutableArray *bothList; // @synthesize bothList=_bothList;
@property(retain, nonatomic) NSMutableArray *latestList; // @synthesize latestList=_latestList;
@property(retain, nonatomic) NSMutableArray *hotList; // @synthesize hotList=_hotList;
@property(nonatomic) long long selectType; // @synthesize selectType=_selectType;
- (void).cxx_destruct;
- (id)changeModelToUserModel:(id)arg1;
- (void)setListReachedEnd:(long long)arg1 endReached:(_Bool)arg2;
- (void)setListDataType:(long long)arg1 dataType:(long long)arg2;
- (void)setListSinceTime:(long long)arg1 sinceTime:(id)arg2;
- (_Bool)listEndReachedWithType:(long long)arg1;
- (long long)listDataWithType:(long long)arg1;
- (id)listSinceTimeWithType:(long long)arg1;
- (id)displayListWithType:(long long)arg1;
- (id)currentSelectModelWithIndex:(long long)arg1;
- (id)init;

@end

