//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@interface QLInteractLivePromoButton : UIButton
{
    _Bool _subscribed;
    unsigned long long _pButtonType;
    struct UIEdgeInsets _defaultImageEdgeInsets;
}

@property(nonatomic) struct UIEdgeInsets defaultImageEdgeInsets; // @synthesize defaultImageEdgeInsets=_defaultImageEdgeInsets;
@property(nonatomic) _Bool subscribed; // @synthesize subscribed=_subscribed;
@property(nonatomic) unsigned long long pButtonType; // @synthesize pButtonType=_pButtonType;
- (void)commonIBDesignble;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;

@end

