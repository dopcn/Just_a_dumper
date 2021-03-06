//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSString;

@interface SYBadgeButton : UIButton
{
    NSString *_bgname;
    NSString *_bgbigname;
    id _observerObject;
    long long _value;
    struct CGPoint _originalCenter;
    struct UIEdgeInsets _customTitleEdgeInsets;
}

+ (id)buttonWithInt:(long long)arg1 center:(struct CGPoint)arg2;
@property long long value; // @synthesize value=_value;
@property(retain) id observerObject; // @synthesize observerObject=_observerObject;
@property(nonatomic) struct CGPoint originalCenter; // @synthesize originalCenter=_originalCenter;
@property(nonatomic) struct UIEdgeInsets customTitleEdgeInsets; // @synthesize customTitleEdgeInsets=_customTitleEdgeInsets;
@property(copy, nonatomic) NSString *bgbigname; // @synthesize bgbigname=_bgbigname;
@property(copy, nonatomic) NSString *bgname; // @synthesize bgname=_bgname;
- (void).cxx_destruct;
- (void)dealloc;
- (void)changeValue:(long long)arg1;
- (void)setHidden:(_Bool)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end

