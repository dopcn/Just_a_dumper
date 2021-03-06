//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDictionary;
@protocol NMGeneralSearchNoResultContentViewDelegate;

@interface NMGeneralSearchNoResultContentView : UIView
{
    NSDictionary *_params;
    id <NMGeneralSearchNoResultContentViewDelegate> _delegate;
    unsigned long long _viewType;
}

+ (id)contentViewWithType:(unsigned long long)arg1 params:(id)arg2;
@property(nonatomic) unsigned long long viewType; // @synthesize viewType=_viewType;
@property(nonatomic) __weak id <NMGeneralSearchNoResultContentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)openOfflineButtonAction:(id)arg1;
- (void)shenmaButtonAction:(id)arg1;
- (void)keywordButtonAction:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithParams:(id)arg1 viewType:(unsigned long long)arg2;

@end

