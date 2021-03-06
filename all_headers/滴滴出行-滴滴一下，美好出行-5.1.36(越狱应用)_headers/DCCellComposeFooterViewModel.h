//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface DCCellComposeFooterViewModel : NSObject
{
    _Bool _hasButton;
    double _height;
    NSArray *_messageList;
    long long _buttonStyle;
    NSString *_buttonTitle;
}

@property(copy, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property(nonatomic) _Bool hasButton; // @synthesize hasButton=_hasButton;
@property(nonatomic) long long buttonStyle; // @synthesize buttonStyle=_buttonStyle;
@property(copy, nonatomic) NSArray *messageList; // @synthesize messageList=_messageList;
@property(nonatomic) double height; // @synthesize height=_height;
- (void).cxx_destruct;
- (void)setupMessageWithApiModel:(id)arg1;
- (void)setupDriverWithApiModel:(id)arg1;
- (void)setupPassengerWithApiModel:(id)arg1;

@end

