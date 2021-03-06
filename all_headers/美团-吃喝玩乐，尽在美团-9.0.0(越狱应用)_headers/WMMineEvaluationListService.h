//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, WMMineEvaluationListModel;

@interface WMMineEvaluationListService : NSObject
{
    _Bool _hasMore;
    long long _userID;
    long long _offset;
    long long _totalNumber;
    long long _currentNumber;
    NSMutableArray *_arrayItem;
    WMMineEvaluationListModel *_model;
}

@property(retain, nonatomic) WMMineEvaluationListModel *model; // @synthesize model=_model;
@property(retain, nonatomic) NSMutableArray *arrayItem; // @synthesize arrayItem=_arrayItem;
@property(nonatomic) long long currentNumber; // @synthesize currentNumber=_currentNumber;
@property(nonatomic) long long totalNumber; // @synthesize totalNumber=_totalNumber;
@property(nonatomic) long long offset; // @synthesize offset=_offset;
@property(nonatomic) long long userID; // @synthesize userID=_userID;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
- (void).cxx_destruct;
- (void)fetchShareInfoWithCommentID:(long long)arg1 poiID:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deleteReviewWithCommentID:(long long)arg1 poiID:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)refreshEvaluationWithUserID:(long long)arg1 commentID:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)loadMoreEvaluationWithUserID:(long long)arg1 commentID:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)loadEvaluationWithUserID:(long long)arg1 commentID:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)resetDataList;
- (id)init;

@end

