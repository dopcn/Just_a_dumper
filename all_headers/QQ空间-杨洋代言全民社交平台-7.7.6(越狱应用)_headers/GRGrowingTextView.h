//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QQGrowingTextView.h"

@class NSString, QZSparkleWordView, UIColor, UILabel;

@interface GRGrowingTextView : QQGrowingTextView
{
    _Bool _scrollEnabled;
    long long _keyboardType;
    NSString *_placeholder;
    UIColor *_placeholderColor;
    UILabel *_placeholderLabel;
    QZSparkleWordView *_sparkleWordView;
}

@property(retain, nonatomic) QZSparkleWordView *sparkleWordView; // @synthesize sparkleWordView=_sparkleWordView;
@property(retain, nonatomic) UILabel *placeholderLabel; // @synthesize placeholderLabel=_placeholderLabel;
@property(retain, nonatomic) UIColor *placeholderColor; // @synthesize placeholderColor=_placeholderColor;
@property(retain, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(nonatomic) _Bool scrollEnabled; // @synthesize scrollEnabled=_scrollEnabled;
@property(nonatomic) long long keyboardType; // @synthesize keyboardType=_keyboardType;
- (void).cxx_destruct;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)paste:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)textViewDidChange:(id)arg1;

@end

