//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "QBFArticleModelCommentProtocol-Protocol.h"

@class ListModel, NSMapTable, NSMutableArray, NSString, PLHttpBlock, QBArticleCommentReplyModel, QBFArticleModel, QBFLoadMoreArticle;
@protocol QBFArticleDetailModelProtocol;

@interface QBFArticleDetailViewModel : NSObject <QBFArticleModelCommentProtocol>
{
    _Bool _isCommentListLoaded;
    id <QBFArticleDetailModelProtocol> _delegate;
    QBFArticleModel *_articleModel;
    QBArticleCommentReplyModel *_replyCommentModel;
    long long _hotCommentCount;
    long long _ownerCommentCount;
    unsigned long long _state;
    unsigned long long _type;
    NSMutableArray *_modelsArr;
    ListModel *_articleOwnerCommentListModel;
    ListModel *_defaultListModel;
    QBFLoadMoreArticle *_loadMoreModel;
    PLHttpBlock *_plHttpBlock;
    NSMapTable *_commentCache;
    NSMutableArray *_commenArr;
    NSMutableArray *_hotCommentArr;
}

@property(retain, nonatomic) NSMutableArray *hotCommentArr; // @synthesize hotCommentArr=_hotCommentArr;
@property(retain, nonatomic) NSMutableArray *commenArr; // @synthesize commenArr=_commenArr;
@property(retain, nonatomic) NSMapTable *commentCache; // @synthesize commentCache=_commentCache;
@property(retain, nonatomic) PLHttpBlock *plHttpBlock; // @synthesize plHttpBlock=_plHttpBlock;
@property(nonatomic) _Bool isCommentListLoaded; // @synthesize isCommentListLoaded=_isCommentListLoaded;
@property(retain, nonatomic) QBFLoadMoreArticle *loadMoreModel; // @synthesize loadMoreModel=_loadMoreModel;
@property(retain, nonatomic) ListModel *defaultListModel; // @synthesize defaultListModel=_defaultListModel;
@property(retain, nonatomic) ListModel *articleOwnerCommentListModel; // @synthesize articleOwnerCommentListModel=_articleOwnerCommentListModel;
@property(retain, nonatomic) NSMutableArray *modelsArr; // @synthesize modelsArr=_modelsArr;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) long long ownerCommentCount; // @synthesize ownerCommentCount=_ownerCommentCount;
@property(nonatomic) long long hotCommentCount; // @synthesize hotCommentCount=_hotCommentCount;
@property(retain, nonatomic) QBArticleCommentReplyModel *replyCommentModel; // @synthesize replyCommentModel=_replyCommentModel;
@property(retain, nonatomic) QBFArticleModel *articleModel; // @synthesize articleModel=_articleModel;
@property(nonatomic) __weak id <QBFArticleDetailModelProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)curListModel;
- (long long)sectionIndexForModel:(id)arg1;
- (_Bool)isCurrentListModel:(id)arg1;
- (void)listModel:(id)arg1 moreItemFetchFailed:(id)arg2;
- (void)listModel:(id)arg1 dictionFetched:(id)arg2 isRefresh:(_Bool)arg3;
- (void)listModel:(id)arg1 moreItemFetched:(id)arg2;
- (void)listModel:(id)arg1 receivedResponse:(id)arg2;
- (void)listModel:(id)arg1 dictionFetched:(id)arg2 itemsArray:(id *)arg3 isRefresh:(_Bool)arg4;
- (id)listModel:(id)arg1 handleListItems:(id)arg2 isNeedRemoveDuplicated:(_Bool)arg3;
- (void)onCommentSuccess:(id)arg1;
- (id)commentWithDict:(id)arg1;
@property(readonly, nonatomic) _Bool isHaveComments;
- (void)onDeleteComment:(id)arg1;
- (void)deleteComment:(id)arg1;
- (void)reportComment:(id)arg1 type:(long long)arg2;
- (void)loadMore;
- (void)refresh;
- (void)initListModelWithArticleUid:(long long)arg1;
- (id)initWithArticleID:(long long)arg1;
- (id)initWithArticle:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

