
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "RNNRootViewCreator.h"
#import "RNNStore.h"
#import "RNNEventEmitter.h"
#import "RNNRootViewProtocol.h"
#import "RNNOptionsManager.h"

@interface RNNControllerFactory : NSObject

-(instancetype)initWithRootViewCreator:(id <RNNRootViewCreator>)creator
								 store:(RNNStore*)store
						  eventEmitter:(RNNEventEmitter*)eventEmitter
							 andBridge:(RCTBridge*)bridge;

-(UIViewController<RNNRootViewProtocol, UIViewControllerPreviewingDelegate> *)createLayoutAndSaveToStore:(NSDictionary*)layout;

- (UIViewController<RNNRootViewProtocol> *)createOverlay:(NSDictionary*)layout;

@property (nonatomic, strong) RNNEventEmitter *eventEmitter;
@property (nonatomic, strong) RNNOptionsManager *optionsManager;

@end
