//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LMRViewModel.h"

@class LMRCommand, LMRCommonPageHelper, LMRGeneralBookListVM, NSArray;

@interface LMRAuthorBooksVM : LMRViewModel
{
    LMRGeneralBookListVM *_bookListVM;
    LMRCommand *_didSelectCommand;
    NSArray *_datas;
    long long _authorID;
    LMRCommonPageHelper *_pageHelper;
}

@property(retain, nonatomic) LMRCommonPageHelper *pageHelper; // @synthesize pageHelper=_pageHelper;
@property(nonatomic) long long authorID; // @synthesize authorID=_authorID;
@property(copy, nonatomic) NSArray *datas; // @synthesize datas=_datas;
@property(retain, nonatomic) LMRCommand *didSelectCommand; // @synthesize didSelectCommand=_didSelectCommand;
@property(retain, nonatomic) LMRGeneralBookListVM *bookListVM; // @synthesize bookListVM=_bookListVM;
- (void).cxx_destruct;
- (id)dataSourceWithBooks:(id)arg1;
- (id)cacheKey;
- (_Bool)isDataEmpty;
- (void)fetchRemoteData:(id)arg1 callBackBlock:(CDUnknownBlockType)arg2;
- (void)fetchLocalData:(id)arg1 callBackBlock:(CDUnknownBlockType)arg2;
- (void)initialize;
- (id)initWithServices:(id)arg1 params:(id)arg2;

@end

