//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface KSOVideoEditBottomBarViewModel : NSObject
{
    NSArray *_buttonTags;
}

@property(copy, nonatomic) NSArray *buttonTags; // @synthesize buttonTags=_buttonTags;
- (void).cxx_destruct;
- (id)buttonTitleWithButtonTag:(unsigned long long)arg1;
- (id)buttonNormalImageWithButtonTag:(unsigned long long)arg1;
- (long long)buttonsCount;
- (id)initWithButtonTags:(id)arg1;

@end

