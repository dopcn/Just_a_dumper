//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class PayTopItem, UIImageView;
@protocol YXPayMenuItemDelegate;

@interface YXPayMenuItemView : UIView
{
    id <YXPayMenuItemDelegate> _delegate;
    PayTopItem *_item;
    UIImageView *_tagImage;
}

@property(retain, nonatomic) UIImageView *tagImage; // @synthesize tagImage=_tagImage;
@property(retain, nonatomic) PayTopItem *item; // @synthesize item=_item;
@property(nonatomic) __weak id <YXPayMenuItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)clickItem:(id)arg1;
- (void)setup;
- (id)initWithTopItem:(id)arg1;
- (void)dealloc;

@end

