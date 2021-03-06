//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSPageFlowUnit.h"

@class EssayGuideCardViewBase, SSThemedView, SSTipModel;

@interface EssayGuideCardFlowUnit : SSPageFlowUnit
{
    SSTipModel *_tipModel;
    SSThemedView *_cardBgView;
    EssayGuideCardViewBase *_cardView;
}

@property(retain, nonatomic) EssayGuideCardViewBase *cardView; // @synthesize cardView=_cardView;
@property(retain, nonatomic) SSThemedView *cardBgView; // @synthesize cardBgView=_cardBgView;
@property(retain, nonatomic) SSTipModel *tipModel; // @synthesize tipModel=_tipModel;
- (void).cxx_destruct;
- (void)refreshUI;
- (double)frameForGuideCardView;
- (void)loadView;
- (id)initWithReuseIdentifier:(id)arg1;

@end

