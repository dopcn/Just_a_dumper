//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FLAnimatedImageView.h"

@class HeadPicture, NSString;

@interface MoveImageView : FLAnimatedImageView
{
    struct CGRect _originFrame;
    HeadPicture *headPicture;
    struct CGPoint oldCenter;
    struct CGPoint oldPoint;
    id aTarget;
    _Bool editing;
    SEL editingTouch;
    SEL noEditTouch;
    NSString *guid;
}

@property(retain, nonatomic) NSString *guid; // @synthesize guid;
@property(nonatomic) id aTarget; // @synthesize aTarget;
@property(nonatomic) _Bool editing; // @synthesize editing;
@property(nonatomic) SEL noEditTouch; // @synthesize noEditTouch;
@property(nonatomic) SEL editingTouch; // @synthesize editingTouch;
@property(nonatomic) HeadPicture *headPicture; // @synthesize headPicture;
- (void)dealloc;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

