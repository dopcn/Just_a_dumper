//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIImage;

@interface RMXLiveAnchorAssistantCellModel : NSObject
{
    _Bool _buttonSelected;
    UIImage *_assistantButtonImageN;
    UIImage *_assistantButtonImageS;
    NSString *_assistantButtonTextN;
    NSString *_assistantButtonTextS;
    CDUnknownBlockType _assistantButtonAction;
}

@property(copy, nonatomic) CDUnknownBlockType assistantButtonAction; // @synthesize assistantButtonAction=_assistantButtonAction;
@property(nonatomic) _Bool buttonSelected; // @synthesize buttonSelected=_buttonSelected;
@property(copy, nonatomic) NSString *assistantButtonTextS; // @synthesize assistantButtonTextS=_assistantButtonTextS;
@property(copy, nonatomic) NSString *assistantButtonTextN; // @synthesize assistantButtonTextN=_assistantButtonTextN;
@property(retain, nonatomic) UIImage *assistantButtonImageS; // @synthesize assistantButtonImageS=_assistantButtonImageS;
@property(retain, nonatomic) UIImage *assistantButtonImageN; // @synthesize assistantButtonImageN=_assistantButtonImageN;
- (void).cxx_destruct;

@end

