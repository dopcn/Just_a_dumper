//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIButton;

@interface MAYMenuManager : NSObject
{
    UIButton *_reportButton;
    UIButton *_deleteButton;
}

+ (id)viewForButtons:(id)arg1;
+ (id)buttonWithTitle:(id)arg1;
+ (id)sharedMenuManager;
@property(readonly, nonatomic) UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(readonly, nonatomic) UIButton *reportButton; // @synthesize reportButton=_reportButton;
- (void).cxx_destruct;
- (id)init;

@end

