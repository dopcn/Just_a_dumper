//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDPPartBaseViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, UIButton, UILabel, UITableView, UIView;
@protocol JDPayPaymentCodePayChannelViewControllerDelegate;

@interface JDPayPaymentCodePayChannelViewController : JDPPartBaseViewController <UITableViewDataSource, UITableViewDelegate>
{
    id <JDPayPaymentCodePayChannelViewControllerDelegate> _delegate;
    UITableView *_payChannelTableView;
    UILabel *_footerViewLabel;
    UIView *_tableheadrView;
    UIButton *_shadowViewBtn;
}

@property(retain, nonatomic) UIButton *shadowViewBtn; // @synthesize shadowViewBtn=_shadowViewBtn;
@property(retain, nonatomic) UIView *tableheadrView; // @synthesize tableheadrView=_tableheadrView;
@property(retain, nonatomic) UILabel *footerViewLabel; // @synthesize footerViewLabel=_footerViewLabel;
@property(retain, nonatomic) UITableView *payChannelTableView; // @synthesize payChannelTableView=_payChannelTableView;
@property(nonatomic) __weak id <JDPayPaymentCodePayChannelViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)jd_addSubViewsAndConstraints;
- (void)back;
- (void)cb_leftButtonAction:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

