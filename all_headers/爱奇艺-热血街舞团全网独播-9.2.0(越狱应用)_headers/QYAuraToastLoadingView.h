//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDictionary, QYAURAToastFailTypeView, QYAURAToastLoadingTypeView, QYAURAToastNewProgressView, QYAURAToastProgressTypeView, QYAURAToastSuccessTypeView;

@interface QYAuraToastLoadingView : UIView
{
    unsigned long long _loadingType;
    QYAURAToastLoadingTypeView *_loadingView;
    QYAURAToastSuccessTypeView *_successView;
    QYAURAToastFailTypeView *_failView;
    QYAURAToastProgressTypeView *_progressOriginView;
    QYAURAToastNewProgressView *_progressNewView;
    NSDictionary *_styleDict;
}

@property(retain, nonatomic) NSDictionary *styleDict; // @synthesize styleDict=_styleDict;
@property(retain, nonatomic) QYAURAToastNewProgressView *progressNewView; // @synthesize progressNewView=_progressNewView;
@property(retain, nonatomic) QYAURAToastProgressTypeView *progressOriginView; // @synthesize progressOriginView=_progressOriginView;
@property(retain, nonatomic) QYAURAToastFailTypeView *failView; // @synthesize failView=_failView;
@property(retain, nonatomic) QYAURAToastSuccessTypeView *successView; // @synthesize successView=_successView;
@property(retain, nonatomic) QYAURAToastLoadingTypeView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) unsigned long long loadingType; // @synthesize loadingType=_loadingType;
- (void).cxx_destruct;
- (void)clearAll;
- (void)updateProgress:(float)arg1;
- (void)setLoadingType:(unsigned long long)arg1 withStyleDic:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

