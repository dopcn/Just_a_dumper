//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CMBillDetailCardViewModel : NSObject
{
    _Bool _incompleted;
    _Bool _isCardNumberCompleteDisplay;
    NSString *_pageCode;
    NSString *_cardNO;
}

@property(nonatomic) _Bool isCardNumberCompleteDisplay; // @synthesize isCardNumberCompleteDisplay=_isCardNumberCompleteDisplay;
@property(nonatomic) _Bool incompleted; // @synthesize incompleted=_incompleted;
@property(copy, nonatomic) NSString *cardNO; // @synthesize cardNO=_cardNO;
@property(copy, nonatomic) NSString *pageCode; // @synthesize pageCode=_pageCode;
- (void).cxx_destruct;
- (void)cardNumberCopyToPasteBoard;
- (id)titleForDisplayButton;
- (id)imageForDisplayButton;
- (id)cardNumberText;

@end

