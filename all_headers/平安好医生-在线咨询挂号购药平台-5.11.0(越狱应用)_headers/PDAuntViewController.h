//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PAHomepageWidgetBaseController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSDictionary, NSString, PAApi_COVERGIRL_RecommendVO, PDEmbedTableView;

@interface PDAuntViewController : PAHomepageWidgetBaseController <UITableViewDataSource, UITableViewDelegate>
{
    _Bool _hasData;
    PDEmbedTableView *_tableview;
    NSDictionary *_firstDic;
    PAApi_COVERGIRL_RecommendVO *_objRecommend;
    NSString *_currentRecommendMensesType;
}

@property(nonatomic) _Bool hasData; // @synthesize hasData=_hasData;
@property(retain, nonatomic) NSString *currentRecommendMensesType; // @synthesize currentRecommendMensesType=_currentRecommendMensesType;
@property(retain, nonatomic) PAApi_COVERGIRL_RecommendVO *objRecommend; // @synthesize objRecommend=_objRecommend;
@property(retain, nonatomic) NSDictionary *firstDic; // @synthesize firstDic=_firstDic;
@property(retain, nonatomic) PDEmbedTableView *tableview; // @synthesize tableview=_tableview;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

