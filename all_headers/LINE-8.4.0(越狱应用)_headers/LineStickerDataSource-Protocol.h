//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSDictionary, UIViewController;

@protocol LineStickerDataSource
- (void)stickerTapped:(NSDictionary *)arg1 viewController:(UIViewController *)arg2;
- (_Bool)isStickerPackagePurchased:(NSDictionary *)arg1;
- (struct CGSize)sizeForKeyboardSticker:(NSDictionary *)arg1;
- (struct CGSize)sizeForRegularSticker:(NSDictionary *)arg1;
- (double)heightForKeyboardSticker:(NSDictionary *)arg1;
- (double)heightForRegularSticker:(NSDictionary *)arg1;
- (void)downloadImageForKeyboardSticker:(NSDictionary *)arg1 completionBlock:(void (^)(UIImage *))arg2;
- (void)downloadImageForRegularSticker:(NSDictionary *)arg1 completionBlock:(void (^)(UIImage *))arg2;
@end

