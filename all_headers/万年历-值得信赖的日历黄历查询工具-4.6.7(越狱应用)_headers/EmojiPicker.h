//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class NSArray, NSMutableArray, UIView;
@protocol EmojiPickerDelegate;

@interface EmojiPicker : UIScrollView
{
    NSArray *_emojiArray;
    long long countx;
    id <EmojiPickerDelegate> _pickerDelegate;
    UIView *_btnBgView;
    NSMutableArray *_btnArr;
}

@property(retain, nonatomic) NSMutableArray *btnArr; // @synthesize btnArr=_btnArr;
@property(retain, nonatomic) UIView *btnBgView; // @synthesize btnBgView=_btnBgView;
@property(nonatomic) id <EmojiPickerDelegate> pickerDelegate; // @synthesize pickerDelegate=_pickerDelegate;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)initData;
- (id)emojiArray;
- (void)onEmojiChose:(id)arg1;
- (void)dealloc;

@end

