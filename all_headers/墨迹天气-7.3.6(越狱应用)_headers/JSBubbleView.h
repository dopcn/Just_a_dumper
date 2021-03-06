//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString;

@interface JSBubbleView : UIView
{
    _Bool selectedToShowCopyMenu;
    int type;
    int style;
    int mediaType;
    NSString *text;
    id data;
    double _frameWidth;
    struct CGRect _bubbleFrameView;
}

+ (int)numberOfLinesForMessage:(id)arg1;
+ (int)maxCharactersPerLine;
+ (double)cellHeightForImage:(id)arg1;
+ (double)cellHeightForText:(id)arg1;
+ (struct CGSize)imageSizeForImage:(id)arg1;
+ (struct CGSize)bubbleSizeForImage:(id)arg1;
+ (struct CGSize)bubbleSizeForText:(id)arg1;
+ (struct CGSize)textSizeForText:(id)arg1;
+ (id)font;
+ (id)bubbleImageTypeOutgoingWithStyle:(int)arg1;
+ (id)bubbleImageTypeIncomingWithStyle:(int)arg1;
+ (id)bubbleImageForType:(int)arg1 style:(int)arg2;
@property(nonatomic) struct CGRect bubbleFrameView; // @synthesize bubbleFrameView=_bubbleFrameView;
@property(nonatomic) double frameWidth; // @synthesize frameWidth=_frameWidth;
@property(nonatomic) _Bool selectedToShowCopyMenu; // @synthesize selectedToShowCopyMenu;
@property(copy, nonatomic) id data; // @synthesize data;
@property(copy, nonatomic) NSString *text; // @synthesize text;
@property(nonatomic) int mediaType; // @synthesize mediaType;
@property(nonatomic) int style; // @synthesize style;
@property(nonatomic) int type; // @synthesize type;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)bubbleImageHighlighted;
- (id)bubbleImage;
- (struct CGRect)bubbleFrame;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 bubbleType:(int)arg2 bubbleStyle:(int)arg3 mediaType:(int)arg4;
- (void)setup;

@end

