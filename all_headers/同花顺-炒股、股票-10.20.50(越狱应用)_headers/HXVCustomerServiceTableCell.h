//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HXVTableViewCell.h"

#import "HXVConditionalViewDelegate-Protocol.h"
#import "MDHTMLLabelDelegate-Protocol.h"

@class HXVConditionalView, HXVCustomerServiceCellViewModel, MDHTMLLabel, NSMutableArray, NSString, UIView;

@interface HXVCustomerServiceTableCell : HXVTableViewCell <MDHTMLLabelDelegate, HXVConditionalViewDelegate>
{
    id _delegate;
    MDHTMLLabel *_htmlLabel;
    HXVConditionalView *_conditionalView;
    UIView *_bgView;
    NSMutableArray *_imageViewArray;
    HXVCustomerServiceCellViewModel *_viewModel;
}

@property(retain, nonatomic) HXVCustomerServiceCellViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) NSMutableArray *imageViewArray; // @synthesize imageViewArray=_imageViewArray;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) HXVConditionalView *conditionalView; // @synthesize conditionalView=_conditionalView;
@property(retain, nonatomic) MDHTMLLabel *htmlLabel; // @synthesize htmlLabel=_htmlLabel;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)removeImageModelWithStartIndex:(long long)arg1;
- (void)imageViewClicked:(id)arg1;
- (id)createImageViewWithIndex:(long long)arg1;
- (void)hxv_initialize;
- (void)hxv_autoLayoutViews;
- (void)hxv_initializeViews;
- (void)bindViewModel:(id)arg1;
- (void)HTMLLabel:(id)arg1 didSelectLinkAtIndex:(long long)arg2 url:(id)arg3 title:(id)arg4;
- (void)conditionalView:(id)arg1 didSelectRowAtIndex:(unsigned long long)arg2 selectedTitle:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

