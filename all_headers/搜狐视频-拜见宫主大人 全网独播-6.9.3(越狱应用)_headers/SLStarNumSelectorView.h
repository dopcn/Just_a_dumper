//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface SLStarNumSelectorView : UIView
{
    UIView *_selectorBGView;
    CDUnknownBlockType _clickedTenButtonHandler;
    CDUnknownBlockType _clickedOneButtonHandler;
}

@property(copy, nonatomic) CDUnknownBlockType clickedOneButtonHandler; // @synthesize clickedOneButtonHandler=_clickedOneButtonHandler;
@property(copy, nonatomic) CDUnknownBlockType clickedTenButtonHandler; // @synthesize clickedTenButtonHandler=_clickedTenButtonHandler;
- (void).cxx_destruct;
- (void)oneButtonclicked:(id)arg1;
- (void)tenButtonclicked:(id)arg1;
- (void)prepareClickedOneButtonHandler:(CDUnknownBlockType)arg1;
- (void)prepareClickedTenButtonHandler:(CDUnknownBlockType)arg1;
- (void)layoutSubviews;
- (void)dismiss:(_Bool)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (void)initilize:(id)arg1;

@end

