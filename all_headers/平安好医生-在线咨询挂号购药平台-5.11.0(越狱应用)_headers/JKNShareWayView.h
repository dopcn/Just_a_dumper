//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface JKNShareWayView : UIView
{
    CDUnknownBlockType _selectBlock;
}

+ (void)showShareWayViewWithBlock:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) CDUnknownBlockType selectBlock; // @synthesize selectBlock=_selectBlock;
- (void).cxx_destruct;
- (void)dealloc;
- (id)createShareWayButton:(id)arg1 imageName:(id)arg2;
- (void)btnShareWayAction:(id)arg1;
- (void)onTapped:(id)arg1;
- (void)tappedCancel;
- (id)initWithFrame:(struct CGRect)arg1;

@end

