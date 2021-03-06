//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseCell.h"

@class DetailView;

@interface SNSTradeWithdrawCell : BaseCell
{
    DetailView *_goodNameView;
    DetailView *_withDrawView;
    DetailView *_statusView;
    DetailView *_openView;
    DetailView *_successView;
    DetailView *_bankView;
    DetailView *_tradeIDView;
}

+ (double)cellHeight:(id)arg1;
@property(retain, nonatomic) DetailView *tradeIDView; // @synthesize tradeIDView=_tradeIDView;
@property(retain, nonatomic) DetailView *bankView; // @synthesize bankView=_bankView;
@property(retain, nonatomic) DetailView *successView; // @synthesize successView=_successView;
@property(retain, nonatomic) DetailView *openView; // @synthesize openView=_openView;
@property(retain, nonatomic) DetailView *statusView; // @synthesize statusView=_statusView;
@property(retain, nonatomic) DetailView *withDrawView; // @synthesize withDrawView=_withDrawView;
@property(retain, nonatomic) DetailView *goodNameView; // @synthesize goodNameView=_goodNameView;
- (void).cxx_destruct;
- (void)loadWithdata:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

