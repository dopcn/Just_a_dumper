//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel, WBJobMapErrorModel, WBJobMapModel, WBJobMapPlanButton, WBJobNewApplyManager;
@protocol WBJobMapDetailViewDelegate;

@interface WBJobMapCardView : UIView
{
    id <WBJobMapDetailViewDelegate> _delegate;
    WBJobMapErrorModel *_mapErrorModel;
    WBJobMapModel *_mapModel;
    UIImageView *_top;
    UIView *_cardView;
    UILabel *_jobname;
    UILabel *_company;
    UIButton *_apply;
    UIButton *_tel;
    UIView *_split;
    UIView *_planView;
    WBJobMapPlanButton *_bus;
    WBJobMapPlanButton *_walk;
    UIView *_bar;
    WBJobNewApplyManager *_applyRequest;
}

@property(retain, nonatomic) WBJobNewApplyManager *applyRequest; // @synthesize applyRequest=_applyRequest;
@property(retain, nonatomic) UIView *bar; // @synthesize bar=_bar;
@property(retain, nonatomic) WBJobMapPlanButton *walk; // @synthesize walk=_walk;
@property(retain, nonatomic) WBJobMapPlanButton *bus; // @synthesize bus=_bus;
@property(retain, nonatomic) UIView *planView; // @synthesize planView=_planView;
@property(retain, nonatomic) UIView *split; // @synthesize split=_split;
@property(retain, nonatomic) UIButton *tel; // @synthesize tel=_tel;
@property(retain, nonatomic) UIButton *apply; // @synthesize apply=_apply;
@property(retain, nonatomic) UILabel *company; // @synthesize company=_company;
@property(retain, nonatomic) UILabel *jobname; // @synthesize jobname=_jobname;
@property(retain, nonatomic) UIView *cardView; // @synthesize cardView=_cardView;
@property(retain, nonatomic) UIImageView *top; // @synthesize top=_top;
@property(retain, nonatomic) WBJobMapModel *mapModel; // @synthesize mapModel=_mapModel;
@property(retain, nonatomic) WBJobMapErrorModel *mapErrorModel; // @synthesize mapErrorModel=_mapErrorModel;
@property(nonatomic) __weak id <WBJobMapDetailViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)telButtonClicked;
- (void)applyButtonClicked;
- (void)buttonClicked:(id)arg1;
- (void)changeClickedStatus:(_Bool)arg1;
- (void)layoutPlanView;
- (void)layoutCardView;
- (id)init;
- (id)viewController;

@end

