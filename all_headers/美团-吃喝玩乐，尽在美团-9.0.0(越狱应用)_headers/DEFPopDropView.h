//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "DEFPopDropView-Protocol.h"

@class DEFPopDropViewAnimation, NSString;

@interface DEFPopDropView : UIView <DEFPopDropView>
{
    CDUnknownBlockType _hideDropViewBlock;
    DEFPopDropViewAnimation *_animation;
}

@property(retain, nonatomic) DEFPopDropViewAnimation *animation; // @synthesize animation=_animation;
@property(copy, nonatomic) CDUnknownBlockType hideDropViewBlock; // @synthesize hideDropViewBlock=_hideDropViewBlock;
- (void).cxx_destruct;
- (void)willHide:(CDUnknownBlockType)arg1;
- (void)willShow:(CDUnknownBlockType)arg1;
- (double)heightOfView;
- (id)initWithAnimation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

