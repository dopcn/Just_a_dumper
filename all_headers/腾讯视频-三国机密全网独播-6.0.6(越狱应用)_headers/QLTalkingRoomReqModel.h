//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QLRequestModel.h"

@class NSMutableArray, NSString, QLASIHTTPRequest;

@interface QLTalkingRoomReqModel : QLRequestModel
{
    _Bool _hasNextPage;
    _Bool _hasNextPage2;
    _Bool _needToRefreshUI;
    int _refresh;
    QLASIHTTPRequest *dataRequest;
    NSString *_commentKey;
    NSString *_pageContext;
    NSString *_pageContext2;
    NSString *_filteKey;
    NSString *_source;
    NSString *_subSource;
    NSString *_lastID;
    long long _pageFlag;
    long long _mode;
    long long _reqHotNum;
    long long _reqNum;
    long long _maxWidth;
    long long _maxHeight;
    long long _commentCount;
    long long _hotRetNum;
    long long _retNum;
    NSMutableArray *_hostCommentList;
    NSMutableArray *_commentList;
    unsigned long long *_cmdId;
}

@property(nonatomic) unsigned long long *cmdId; // @synthesize cmdId=_cmdId;
@property(nonatomic) _Bool needToRefreshUI; // @synthesize needToRefreshUI=_needToRefreshUI;
@property(nonatomic) int refresh; // @synthesize refresh=_refresh;
@property(retain, nonatomic) NSMutableArray *commentList; // @synthesize commentList=_commentList;
@property(retain, nonatomic) NSMutableArray *hostCommentList; // @synthesize hostCommentList=_hostCommentList;
@property(nonatomic) long long retNum; // @synthesize retNum=_retNum;
@property(nonatomic) long long hotRetNum; // @synthesize hotRetNum=_hotRetNum;
@property(nonatomic) long long commentCount; // @synthesize commentCount=_commentCount;
@property(nonatomic) _Bool hasNextPage2; // @synthesize hasNextPage2=_hasNextPage2;
@property(nonatomic) _Bool hasNextPage; // @synthesize hasNextPage=_hasNextPage;
@property(nonatomic) long long maxHeight; // @synthesize maxHeight=_maxHeight;
@property(nonatomic) long long maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) long long reqNum; // @synthesize reqNum=_reqNum;
@property(nonatomic) long long reqHotNum; // @synthesize reqHotNum=_reqHotNum;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(nonatomic) long long pageFlag; // @synthesize pageFlag=_pageFlag;
@property(retain, nonatomic) NSString *lastID; // @synthesize lastID=_lastID;
@property(retain, nonatomic) NSString *subSource; // @synthesize subSource=_subSource;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *filteKey; // @synthesize filteKey=_filteKey;
@property(retain, nonatomic) NSString *pageContext2; // @synthesize pageContext2=_pageContext2;
@property(retain, nonatomic) NSString *pageContext; // @synthesize pageContext=_pageContext;
@property(retain, nonatomic) NSString *commentKey; // @synthesize commentKey=_commentKey;
@property(retain, nonatomic) QLASIHTTPRequest *dataRequest; // @synthesize dataRequest;
- (void).cxx_destruct;
- (void)request:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)requestDidRetryRequest:(id)arg1;
- (void)requestDidFinishLoad:(id)arg1;
- (void)load:(int)arg1 more:(_Bool)arg2;
- (void)setRequestData:(id)arg1 filterKey:(id)arg2 pageContex:(id)arg3 pageFlag:(long long)arg4 mode:(long long)arg5;
- (void)setRequestData:(id)arg1 filterKey:(id)arg2 pageContex:(id)arg3 pageFlag:(long long)arg4;
- (id)coverCFURLCreateStringByAddingPercentEscapes:(id)arg1 withLegalURL:(id)arg2 withEncodingType:(unsigned int)arg3;
- (void)cancel;
- (void)cancelDataRequest;
- (void)dealloc;
- (id)init;

@end

