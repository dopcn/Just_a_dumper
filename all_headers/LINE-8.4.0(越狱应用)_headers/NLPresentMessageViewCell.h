//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NLBaseMessageViewCell.h"

@class NLPresentMessageView;

@interface NLPresentMessageViewCell : NLBaseMessageViewCell
{
    NLPresentMessageView *_presentView;
}

+ (id)messageForReceiveNewMessageObject:(struct NSManagedObject *)arg1;
+ (struct NLMessageCellSizeResult)cellSizeWithMessageContext:(id)arg1 messageObject:(struct NSManagedObject *)arg2 width:(double)arg3;
+ (_Bool)shouldShowButtonWithPresentModel:(id)arg1;
+ (id)messageWithPresentModel:(id)arg1 isReceived:(_Bool)arg2;
@property(retain, nonatomic) NLPresentMessageView *presentView; // @synthesize presentView=_presentView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)didChangeMessageObject:(struct NSManagedObject *)arg1;
- (void)prepareForReuse;
- (id)contentViewForMessage;
- (void)initContentView;

@end

