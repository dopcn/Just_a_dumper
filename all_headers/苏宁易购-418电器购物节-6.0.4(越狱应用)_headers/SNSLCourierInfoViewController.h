//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SNSLRefreshViewController.h"

#import "SNCourierCommentCountQueryDelegate-Protocol.h"
#import "SNSLCourierCommentRequestDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, SNMBCourierInfoDTO, SNSLCourierCommentRequest, SNSLCourierGetCourierCommentCountRequest, SNSLCourierInfoView, SNSLCourierTagView, UIButton, UILabel, UIView;

@interface SNSLCourierInfoViewController : SNSLRefreshViewController <SNSLCourierCommentRequestDelegate, SNCourierCommentCountQueryDelegate>
{
    _Bool _isExpand;
    SNMBCourierInfoDTO *_courierInfoDto;
    SNSLCourierCommentRequest *_listRequest;
    SNSLCourierGetCourierCommentCountRequest *_countRequest;
    long long _commentAmount;
    NSMutableArray *_listArr;
    UIButton *_bottomBtn;
    SNSLCourierInfoView *_infoHeadView;
    SNSLCourierTagView *_tagView;
    UIView *_backView;
    UILabel *_badgeIcon;
    NSArray *_courierLabelsArrary;
}

@property(retain, nonatomic) NSArray *courierLabelsArrary; // @synthesize courierLabelsArrary=_courierLabelsArrary;
@property(retain, nonatomic) UILabel *badgeIcon; // @synthesize badgeIcon=_badgeIcon;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(retain, nonatomic) SNSLCourierTagView *tagView; // @synthesize tagView=_tagView;
@property(retain, nonatomic) SNSLCourierInfoView *infoHeadView; // @synthesize infoHeadView=_infoHeadView;
@property(retain, nonatomic) UIButton *bottomBtn; // @synthesize bottomBtn=_bottomBtn;
@property(retain, nonatomic) NSMutableArray *listArr; // @synthesize listArr=_listArr;
@property(nonatomic) long long commentAmount; // @synthesize commentAmount=_commentAmount;
@property(retain, nonatomic) SNSLCourierGetCourierCommentCountRequest *countRequest; // @synthesize countRequest=_countRequest;
@property(retain, nonatomic) SNSLCourierCommentRequest *listRequest; // @synthesize listRequest=_listRequest;
@property(retain, nonatomic) SNMBCourierInfoDTO *courierInfoDto; // @synthesize courierInfoDto=_courierInfoDto;
@property(nonatomic) _Bool isExpand; // @synthesize isExpand=_isExpand;
- (void).cxx_destruct;
- (void)setUpSubview;
- (void)changeExpandStatus;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)loadMoreData;
- (void)refreshData;
- (void)queryCourierCommentListWithRequest:(id)arg1 success:(_Bool)arg2 list:(id)arg3;
- (void)queryCourierCommentCountWithRequest:(id)arg1 successful:(_Bool)arg2 Count:(long long)arg3;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithCourierInfo:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

