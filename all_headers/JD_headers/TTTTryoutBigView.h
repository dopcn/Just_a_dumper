//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTTBaseView.h"

#import "TTTBaseViewProtocol-Protocol.h"

@class JDImageView, NSString, TTTTryoutInfoView, TTTTryoutMarkView, TTTTryoutReportView, TTTTryoutWareModel, TTTWaresContrastPriceView, UILabel;
@protocol TTTTryoutBigViewDelegate;

@interface TTTTryoutBigView : TTTBaseView <TTTBaseViewProtocol>
{
    id <TTTTryoutBigViewDelegate> _delegate;
    JDImageView *_wareImage;
    TTTTryoutMarkView *_markView;
    UILabel *_nameLabel;
    TTTTryoutInfoView *_infoView;
    TTTTryoutReportView *_reportView;
    TTTWaresContrastPriceView *_priceView;
    UILabel *_stateLabel;
    TTTTryoutWareModel *_tryoutModel;
}

@property(nonatomic) __weak TTTTryoutWareModel *tryoutModel; // @synthesize tryoutModel=_tryoutModel;
@property(retain, nonatomic) UILabel *stateLabel; // @synthesize stateLabel=_stateLabel;
@property(retain, nonatomic) TTTWaresContrastPriceView *priceView; // @synthesize priceView=_priceView;
@property(retain, nonatomic) TTTTryoutReportView *reportView; // @synthesize reportView=_reportView;
@property(retain, nonatomic) TTTTryoutInfoView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) TTTTryoutMarkView *markView; // @synthesize markView=_markView;
@property(retain, nonatomic) JDImageView *wareImage; // @synthesize wareImage=_wareImage;
@property(nonatomic) __weak id <TTTTryoutBigViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGRect)stateLabelFrame;
- (struct CGRect)priceViewFrame;
- (struct CGRect)reportViewFrame;
- (struct CGRect)infoViewFrame;
- (struct CGRect)markViewFrame;
- (struct CGRect)nameLabelFrame;
- (struct CGRect)imageViewFrame;
- (void)updateReportView;
- (void)updateInfoView;
- (void)updateMarkView;
- (void)tryoutViewClick;
- (void)bindDataWithViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

